/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_INUIExtensionContextHosting.h>

@protocol INUIExtensionHostContextDelegate;
@class NSString;

@interface _INUIExtensionHostContext : NSExtensionContext <_INUIExtensionContextHosting> {

	id<INUIExtensionHostContextDelegate> _extensionHostContextDelegate;

}

@property (assign,nonatomic,__weak) id<INUIExtensionHostContextDelegate> extensionHostContextDelegate;              //@synthesize extensionHostContextDelegate=_extensionHostContextDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)willBeginEditing;
-(void)requestHandlingOfIntent:(id)arg1 ;
-(void)setExtensionContextState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_errorHandlingExtensionContextProxy;
-(id<INUIExtensionHostContextDelegate>)extensionHostContextDelegate;
-(void)setExtensionHostContextDelegate:(id<INUIExtensionHostContextDelegate>)arg1 ;
@end

