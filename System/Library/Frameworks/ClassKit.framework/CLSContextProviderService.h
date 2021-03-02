/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSExtension, NSUUID, CLSContextProviderExtensionHostContext, CLSContextProviderExtensionContext, NSArray, NSString;

@interface CLSContextProviderService : NSObject {

	NSObject*<OS_dispatch_queue> _serviceConnectionQueue;
	NSExtension* _extension;
	NSUUID* _sessionUUID;
	CLSContextProviderExtensionHostContext* _extensionHostContext;
	CLSContextProviderExtensionContext* _extensionContext;
	NSArray* _mainAppContextPath;
	Ai _connectionCount;
	NSString* _extensionIdentifier;
	NSString* _appIdentifier;
	NSString* _appName;
	NSString* _localizedAppName;

}

@property (nonatomic,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * appIdentifier;                    //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * appName;                          //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) NSString * localizedAppName;                 //@synthesize localizedAppName=_localizedAppName - In the implementation block
-(void)disconnect;
-(id)initWithExtension:(id)arg1 ;
-(NSString *)appIdentifier;
-(id)init;
-(NSString *)appName;
-(NSString *)extensionIdentifier;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)description;
-(NSString *)localizedAppName;
-(void)getMainAppContextPathWithCompletion:(/*^block*/id)arg1 ;
-(void)updateDescendantsOfContextPath:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
