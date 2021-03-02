/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNPhotoPickerActionsViewControllerLayout.h>

@protocol CNPhotoPickerActionsViewControllerLayout
@property (nonatomic,readonly) CGSize containerSize; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,readonly) long long buttonCount; 
@property (nonatomic,readonly) CGRect actionButtonsViewFrame; 
@property (nonatomic,readonly) CGRect imageContainerViewFrame; 
@required
-(CGRect)actionButtonsViewFrame;
-(CGRect)imageContainerViewFrame;
-(long long)buttonCount;
-(CGSize)containerSize;
-(UIEdgeInsets)edgeInsets;

@end


@interface CNPhotoPickerActionsViewControllerLayout : NSObject <CNPhotoPickerActionsViewControllerLayout> {

	long long _buttonCount;
	CGSize _containerSize;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,readonly) CGSize containerSize;                        //@synthesize containerSize=_containerSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                     //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,readonly) long long buttonCount;                       //@synthesize buttonCount=_buttonCount - In the implementation block
@property (nonatomic,readonly) CGRect actionButtonsViewFrame; 
@property (nonatomic,readonly) CGRect imageContainerViewFrame; 
+(double)buttonHeight;
+(double)heightForButtonsViewWithButtonCount:(long long)arg1 ;
-(CGRect)actionButtonsViewFrame;
-(CGRect)imageContainerViewFrame;
-(id)initWithContainerSize:(CGSize)arg1 insets:(UIEdgeInsets)arg2 buttonCount:(long long)arg3 ;
-(CGRect)actionButtonsViewFrameForButtonCount:(long long)arg1 ;
-(long long)buttonCount;
-(CGSize)containerSize;
-(UIEdgeInsets)edgeInsets;
@end
