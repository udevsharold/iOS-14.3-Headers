/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ACDPreferences : NSObject
+(id)sharedPreferences;
-(id)objectForKey:(id)arg1 ;
-(void)synchronize;
-(void)reset;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(double)serverTimeoutInterval;
@end
