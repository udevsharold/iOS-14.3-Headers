/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface SKUIImagePlaceholder : NSObject {

	UIColor* _backgroundColor;
	UIColor* _borderColor;
	double _borderWidth;
	/*^block*/id _cornerPathBlock;

}

@property (nonatomic,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * borderColor;                  //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) double borderWidth;                     //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,copy,readonly) id cornerPathBlock;                //@synthesize cornerPathBlock=_cornerPathBlock - In the implementation block
-(double)borderWidth;
-(UIColor *)borderColor;
-(UIColor *)backgroundColor;
-(id)cornerPathBlock;
-(id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerRadius:(double)arg4 ;
-(id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerPathBlock:(/*^block*/id)arg4 ;
@end

