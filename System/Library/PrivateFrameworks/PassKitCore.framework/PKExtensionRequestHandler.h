/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKInvalidatable.h>

@protocol NSCopying;
@class NSExtension, NSExtensionContext, NSString;

@interface PKExtensionRequestHandler : NSObject <PKInvalidatable> {

	NSExtension* _extension;
	NSExtensionContext* _extensionContext;
	id<NSCopying> _requestIdentifier;
	BOOL _invalidated;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) NSExtensionContext * extensionContext; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)isInvalidated;
-(NSExtensionContext *)extensionContext;
-(id)_initWithExtension:(id)arg1 extensionRequestOptions:(unsigned long long)arg2 ;
-(void)invalidate;
@end

