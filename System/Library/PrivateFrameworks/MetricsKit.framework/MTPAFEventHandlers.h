/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTEventHandlers.h>

@class MTMediaActivityEventHandler;

@interface MTPAFEventHandlers : MTEventHandlers

@property (nonatomic,readonly) MTMediaActivityEventHandler * playStart; 
@property (nonatomic,readonly) MTMediaActivityEventHandler * playStop; 
@property (nonatomic,readonly) MTMediaActivityEventHandler * seekStart; 
@property (nonatomic,readonly) MTMediaActivityEventHandler * seekStop; 
-(void)registerDefaultEventHandlers;
-(Class)baseDataProviderClass;
-(MTMediaActivityEventHandler *)seekStart;
-(MTMediaActivityEventHandler *)seekStop;
-(MTMediaActivityEventHandler *)playStart;
-(MTMediaActivityEventHandler *)playStop;
@end
