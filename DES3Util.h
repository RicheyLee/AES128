//
//  DES3Util.h
//  shoudao2
//
//  Created by Richey on 15/5/28.
//  Copyright (c) 2015年 Richey. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DES3Util : NSObject
+ (NSString*) AES128Encrypt:(NSString *)plainText;

+ (NSString*) AES128Decrypt:(NSString *)encryptText;


@end
