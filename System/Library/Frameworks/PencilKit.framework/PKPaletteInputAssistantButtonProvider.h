/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITextInputAssistantItem;

@interface PKPaletteInputAssistantButtonProvider : NSObject {

	UITextInputAssistantItem* _inputAssistantItem;
	/*^block*/id _inclusionFilter;

}

@property (nonatomic,retain) UITextInputAssistantItem * inputAssistantItem;              //@synthesize inputAssistantItem=_inputAssistantItem - In the implementation block
@property (nonatomic,copy) id inclusionFilter;                                           //@synthesize inclusionFilter=_inclusionFilter - In the implementation block
-(UITextInputAssistantItem *)inputAssistantItem;
-(id)init;
-(id)initWithInputAssistantItem:(id)arg1 ;
-(void)setInputAssistantItem:(UITextInputAssistantItem *)arg1 ;
-(id)buttonsForCurrentConfiguration;
-(id)_nonSystemBarButtonItemGroups;
-(BOOL)_shouldIncludeBarButtonItem:(id)arg1 ;
-(id)inclusionFilter;
-(void)setInclusionFilter:(id)arg1 ;
@end
