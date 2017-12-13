//
//  NFFeedFuncOption.h
//  NewsFeedsUISDK
//
//  Created by neal on 2017/12/4.
//  Copyright © 2017年 NetEase. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NFFuncOption.h"

typedef NS_ENUM(NSUInteger, NFFeedsOptionThumMod) {
    NFFeedsOptionThumModNone, //无图
    NFFeedsOptionThumModSingle,     //单图
    NFFeedsOptionThumModNormal
};

@interface NFFeedsFuncOption : NFFuncOption

@property(nonatomic, assign) NFFeedsOptionThumMod thumbMode; // 0 无图 1 做多单张图 2 无限制
@property(nonatomic, assign) NSInteger refreshCount;


@end
