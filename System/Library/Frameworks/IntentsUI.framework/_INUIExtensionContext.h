/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_INUIExtensionContextVending.h>

@class _INUIExtensionContextState, NSString;

@interface _INUIExtensionContext : NSExtensionContext <_INUIExtensionContextVending> {

	_INUIExtensionContextState* _currentExtensionContextState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)setExtensionContextState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_errorHandlingHostProxy;
-(CGSize)hostedViewMinimumAllowedSize;
-(CGSize)hostedViewMaximumAllowedSize;
-(CGSize)_bestAllowedSizeForAllowedSizesDictionary:(id)arg1 ;
-(id)interfaceParametersDescription;
-(void)_requestHandlingOfIntent:(id)arg1 ;
-(void)_willBeginEditing;
@end
