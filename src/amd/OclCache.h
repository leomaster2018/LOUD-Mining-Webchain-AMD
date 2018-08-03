/* XMRig
 * Copyright 2010      Jeff Garzik <jgarzik@pobox.com>
 * Copyright 2012-2014 pooler      <pooler@litecoinpool.org>
 * Copyright 2014      Lucas Jones <https://github.com/lucasjones>
 * Copyright 2014-2016 Wolf9466    <https://github.com/OhGodAPet>
 * Copyright 2016      Jay D Dee   <jayddee246@gmail.com>
 * Copyright 2017-2018 XMR-Stak    <https://github.com/fireice-uk>, <https://github.com/psychocrypt>
 * Copyright 2016-2018 XMRig       <https://github.com/xmrig>, <support@xmrig.com>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __OCLCACHE_H__
#define __OCLCACHE_H__


#include "amd/GpuContext.h"


namespace xmrig {
    class Config;
}


class OclCache
{
public:
    OclCache(int index, cl_context opencl_ctx, GpuContext *ctx, const char *source_code, xmrig::Config *config);

    bool load();

private:
    bool prepare(const char *options);
    bool save(int dev_id, cl_uint num_devices) const;
    cl_uint numDevices() const;
    int devId(cl_uint num_devices) const;
    void createDirectory() const;

    static std::string prefix();
    static void sleep(size_t sec);

    cl_context m_oclCtx;
    const char *m_sourceCode;
    GpuContext *m_ctx;
    int m_index;
    std::string m_fileName;
    xmrig::Config *m_config;
};


#endif /* __OCLCACHE_H__ */
