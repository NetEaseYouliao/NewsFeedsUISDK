//
//  NFArticleFuncOption.h
//  NewsFeedsUISDK
//
//  Created by neal on 2017/12/4.
//  Copyright © 2017年 NetEase. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NFFuncOption.h"

typedef NS_ENUM(NSUInteger, NFArticleNavType) {
    NFArticleNavTypeSource,
    NFArticleNavTypeTitle,
    NFArticleNavTypeCustom,
    NFArticleNavTypeNone
};

typedef NS_ENUM(NSUInteger, NFSharePlatform) {
    NFSharePlatformWXSession,
    NFSharePlatformWXTimeline
};

@interface NFArticleFuncOption : NFFuncOption

@property(nonatomic, strong) NSArray<NSNumber *> *supportedSharePlatform;

@property(nonatomic, assign) BOOL showRelated;

@property(nonatomic, assign) NFArticleNavType navType;
@property(nonatomic, copy) NSString *customNavTitle;            //如果是类型是custom 必须传入此字段.否则无效
@end
