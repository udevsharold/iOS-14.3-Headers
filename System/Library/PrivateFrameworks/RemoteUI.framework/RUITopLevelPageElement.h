/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RUITopLevelPageElement <NSObject>
@optional
-(void)viewWillDisappear:(BOOL)arg1;
-(id)titleLabel;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)setTitle:(id)arg1;
-(void)viewDidLoad;
-(void)viewDidLayout;

@required
-(id)view;
-(void)populatePostbackDictionary:(id)arg1;
-(void)setObjectModel:(id)arg1;

@end
