/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class NSString, UIBezierPath;

@interface PodcastsUI.MacTextView : UITextView

@property (copy,nonatomic) NSString * text; 
@property (retain,nonatomic) UIBezierPath * accessibilityPath; 
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIBezierPath *)accessibilityPath;
-(void)setAccessibilityPath:(UIBezierPath *)arg1 ;
@end
