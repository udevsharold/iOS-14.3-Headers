/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CXCallSource.h>

@protocol NSCopying;
@class CXProviderExtensionHostContext, NSExtension;

@interface CXExtensionCallSource : CXCallSource {

	CXProviderExtensionHostContext* _extensionContext;
	NSExtension* _extension;
	id<NSCopying> _requestIdentifier;

}

@property (nonatomic,retain) NSExtension * extension;                                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying> requestIdentifier;                                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) CXProviderExtensionHostContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
-(id)initWithExtension:(id)arg1 ;
-(NSExtension *)extension;
-(id)bundle;
-(void)setRequestIdentifier:(id<NSCopying>)arg1 ;
-(id)init;
-(id<NSCopying>)requestIdentifier;
-(id)vendorProtocolDelegate;
-(id)identifier;
-(void)setExtension:(NSExtension *)arg1 ;
-(int)processIdentifier;
-(CXProviderExtensionHostContext *)extensionContext;
-(void)setExtensionContext:(CXProviderExtensionHostContext *)arg1 ;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(void)beginWithCompletionHandler:(/*^block*/id)arg1 ;
@end
