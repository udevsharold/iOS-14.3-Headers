/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RUILoaderDelegate <NSObject>
@optional
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 topActionSignal:(id)arg3;
-(void)loader:(id)arg1 didFinishLoadWithError:(id)arg2;
-(void)loader:(id)arg1 didFinishLoadWithError:(id)arg2 forRequest:(id)arg3;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2 forRequest:(id)arg3;
-(void)loader:(id)arg1 loadResourcesForObjectModel:(id)arg2 completion:(/*^block*/id)arg3;
-(void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3;
-(void)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)sessionConfigurationForLoader:(id)arg1;
-(void)loader:(id)arg1 didFailWithError:(id)arg2;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;

@end

