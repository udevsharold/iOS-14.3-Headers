/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAssetResourceLoaderDelegate <NSObject>
@optional
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;
-(void)resourceLoader:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;

@end

