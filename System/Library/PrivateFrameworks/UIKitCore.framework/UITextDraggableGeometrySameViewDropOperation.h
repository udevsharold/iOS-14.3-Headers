/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UITextRange, NSAttributedString;


@protocol UITextDraggableGeometrySameViewDropOperation <NSObject>
@property (nonatomic,readonly) NSArray * sourceRanges; 
@property (nonatomic,readonly) UITextRange * targetRange; 
@property (nonatomic,readonly) NSAttributedString * text; 
@property (nonatomic,readonly) unsigned long long operation; 
@required
-(unsigned long long)operation;
-(NSAttributedString *)text;
-(NSArray *)sourceRanges;
-(UITextRange *)targetRange;

@end
