//
//  NFChannelFuncOption.h
//  NewsFeedsUISDK
//
//  Created by neal on 2017/12/4.
//  Copyright © 2017年 NetEase. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NFFuncOption.h"

@interface NFChannelFuncOption : NFFuncOption

@property(nonatomic, copy) NSString *defaultChannelID;
@property(nonatomic, assign, getter= isSlidable) BOOL   slidable;

@end
