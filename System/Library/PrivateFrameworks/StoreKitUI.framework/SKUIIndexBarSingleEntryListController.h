/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class SKUIIndexBarEntryDescriptor, SKUIViewElement, SKUIIndexBarEntryViewElement;

@interface SKUIIndexBarSingleEntryListController : SKUIIndexBarEntryListController {

	SKUIIndexBarEntryDescriptor* _entryDescriptor;
	SKUIViewElement* _descriptiveViewElement;
	SKUIIndexBarEntryViewElement* _entryViewElement;

}

@property (nonatomic,readonly) SKUIIndexBarEntryViewElement * entryViewElement;              //@synthesize entryViewElement=_entryViewElement - In the implementation block
-(id)entryDescriptorAtIndex:(long long)arg1 ;
-(long long)numberOfEntryDescriptors;
-(BOOL)hidesIndexBar;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2 ;
-(BOOL)needsRootTargetViewElement;
-(void)reloadViewElementData;
-(id)initWithEntryViewElement:(id)arg1 ;
-(SKUIIndexBarEntryViewElement *)entryViewElement;
@end

