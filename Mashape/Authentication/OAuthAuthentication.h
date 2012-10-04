/*
 * Mashape Objective-C Client library.
 *
 * Copyright (C) 2012 Mashape, Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * The author of this software is Mashape, Inc.
 * For any question or feedback please contact us at: support@mashape.com
 *
 */

#define CONSUMER_KEY @"consumerKey"
#define CONSUMER_SECRET @"consumerSecret"
#define REDIRECT_URL @"redirectUrl"
#define ACCESS_TOKEN @"accessToken"
#define ACCESS_SECRET @"accessSecret"

#import "Authentication.h"

@interface OAuthAuthentication : Authentication

- (Authentication*) initWithCredentials: (NSString*)consumerKey consumerSecret: (NSString*)consumerSecret redirectUrl:(NSString*) redirectUrl;

@end
