/*
 * Copyright (C) 2014  Andrew Gunnerson <andrewgunnerson@gmail.com>
 *
 * This file is part of MultiBootPatcher
 *
 * MultiBootPatcher is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MultiBootPatcher is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with MultiBootPatcher.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <string>
#include <vector>

namespace mb
{
namespace util
{

std::string get_cwd();
std::string dir_name(const std::string &path);
std::string base_name(const std::string &path);
std::string real_path(const std::string &path);
bool read_link(const std::string &path, std::string *out);
bool inodes_equal(const std::string &path1, const std::string &path2);
std::vector<std::string> path_split(const std::string &path);
std::string path_join(const std::vector<std::string> &components);

}
}
