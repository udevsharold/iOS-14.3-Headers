/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface SSVShowDialogRequest : SSRequest <SSXPCCoding> {

	NSObject*<OS_xpc_object> _dialog;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> encodedDialog;              //@synthesize dialog=_dialog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)startWithDialogResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithEncodedDialog:(id)arg1 ;
-(NSObject*<OS_xpc_object>)encodedDialog;
@end
