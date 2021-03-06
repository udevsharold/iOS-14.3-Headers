/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, NSArray, PLPillContentItem;


@protocol PLPill <NSObject>
@property (nonatomic,readonly) UIView * leadingAccessoryView; 
@property (nonatomic,readonly) UIView * trailingAccessoryView; 
@property (nonatomic,copy) NSArray * centerContentItems; 
@property (nonatomic,copy) PLPillContentItem * referenceContentItemForIntrinsicContentSize; 
@required
-(UIView *)leadingAccessoryView;
-(UIView *)trailingAccessoryView;
-(void)setCenterContentItems:(id)arg1 animated:(BOOL)arg2;
-(void)setCenterContentItems:(id)arg1;
-(NSArray *)centerContentItems;
-(CGSize*)sizeThatFitsContentItem:(id)arg1;
-(PLPillContentItem *)referenceContentItemForIntrinsicContentSize;
-(void)setReferenceContentItemForIntrinsicContentSize:(id)arg1;

@end

