/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKBAutoFillTestTaggerViewDelegate <NSObject>
@optional
-(void)taggerView:(id)arg1 didTagFormRequest:(id)arg2 withSelectedType:(long long)arg3;
-(void)taggerView:(id)arg1 didTagTextFieldRequest:(id)arg2 withSelectedType:(long long)arg3;
-(void)taggerView:(id)arg1 willTagRequest:(id)arg2;
-(long long)taggerView:(id)arg1 selectedTypeForFormRequest:(id)arg2;
-(void)taggerViewDidFinish:(id)arg1;
-(long long)taggerView:(id)arg1 selectedTypeForTextFieldRequest:(id)arg2;

@end

