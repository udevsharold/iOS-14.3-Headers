/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StorageSettings/StorageSettings-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface STStorageProgressView : UIView {

	UIColor* _grayColor;
	UIColor* _blueColor;
	double _percent;

}

@property (assign,nonatomic) double percent;              //@synthesize percent=_percent - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)updateColors;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)percent;
-(void)setPercent:(double)arg1 ;
@end
