/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/ILClassificationUIExtensionVendorProtocol.h>

@class NSString;

@interface ILClassificationUIExtensionContext : NSExtensionContext <ILClassificationUIExtensionVendorProtocol> {

	BOOL _readyForClassificationResponse;

}

@property (assign,getter=isReadyForClassificationResponse,nonatomic) BOOL readyForClassificationResponse;              //@synthesize readyForClassificationResponse=_readyForClassificationResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)viewController;
-(void)setReadyForClassificationResponse:(BOOL)arg1 ;
-(oneway void)prepareForClassificationRequest:(id)arg1 ;
-(oneway void)classificationResponseForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isReadyForClassificationResponse;
@end
