/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSArray;

@interface MKTextItemView : UIView {

	NSArray* _labels;

}

@property (nonatomic,copy) NSArray * labels;              //@synthesize labels=_labels - In the implementation block
-(NSArray *)labels;
-(void)setTextColor:(id)arg1 ;
-(id)initWithStrings:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 labelsNumberOfLines:(long long)arg4 ;
-(void)setLabels:(NSArray *)arg1 ;
@end

