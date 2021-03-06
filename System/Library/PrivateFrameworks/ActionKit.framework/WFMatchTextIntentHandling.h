/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFMatchTextIntentHandling <NSObject>
@optional
-(void)confirmMatchText:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)handleMatchText:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveTextForMatchText:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolvePatternForMatchText:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveCaseSensitiveForMatchText:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

