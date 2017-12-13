//
//  NFDataFuncOption.h
//  NewsFeedsUISDK
//
//  Created by neal on 2017/12/7.
//  Copyright © 2017年 NetEase. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NFFuncOption.h"

@interface NFDataFuncOption : NFFuncOption

@property(nonatomic, assign) NSInteger maxCacheNum;
@property(nonatomic, assign) NSTimeInterval autoRefreshInterval;

@end
