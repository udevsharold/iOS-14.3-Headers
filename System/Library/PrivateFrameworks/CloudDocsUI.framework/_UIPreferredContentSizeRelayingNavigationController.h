/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/_UIPreferredContentSizeRelayingContainer.h>

@class NSString;

@interface _UIPreferredContentSizeRelayingNavigationController : UINavigationController <_UIPreferredContentSizeRelayingContainer> {

	/*^block*/id _preferredContentSizeDidChange;

}

@property (nonatomic,copy) id preferredContentSizeDidChange;              //@synthesize preferredContentSizeDidChange=_preferredContentSizeDidChange - In the implementation block
@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)preferredContentSizeDidChange;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)setPreferredContentSizeDidChange:(id)arg1 ;
@end

