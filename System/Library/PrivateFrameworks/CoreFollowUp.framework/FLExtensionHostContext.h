/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/FLExtensionHostContextInterface.h>

@protocol FLExtensionHostContextInterface;
@class NSString;

@interface FLExtensionHostContext : NSExtensionContext <FLExtensionHostContextInterface> {

	id<FLExtensionHostContextInterface> _delegate;

}

@property (assign,nonatomic,__weak) id<FLExtensionHostContextInterface> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setDelegate:(id<FLExtensionHostContextInterface>)arg1 ;
-(id<FLExtensionHostContextInterface>)delegate;
-(id)remoteContextWithErrorHandler:(/*^block*/id)arg1 ;
-(void)extensionDidFinish;
-(void)extensionDidFinishWithCompletionHandler:(/*^block*/id)arg1 ;
@end
