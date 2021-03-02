/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATXLocationManagerStateStore <NSObject>
@property (assign) double cacheExpirationInterval; 
@required
-(void)clear;
-(double)cacheExpirationInterval;
-(id)loadNowOrCallLater:(/*^block*/id)arg1;
-(void)write:(id)arg1;
-(void)setCacheExpirationInterval:(double)arg1;

@end
