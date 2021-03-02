/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SOAuthorizationRequest, NSURL, NSString, NSDictionary, NSData;

@interface ASAuthorizationProviderExtensionAuthorizationRequest : NSObject {

	SOAuthorizationRequest* _authorizationRequest;

}

@property (nonatomic,readonly) SOAuthorizationRequest * authorizationRequest;              //@synthesize authorizationRequest=_authorizationRequest - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * requestedOperation; 
@property (nonatomic,readonly) NSDictionary * httpHeaders; 
@property (nonatomic,readonly) NSData * httpBody; 
@property (nonatomic,copy,readonly) NSString * realm; 
@property (nonatomic,readonly) NSDictionary * extensionData; 
@property (nonatomic,copy,readonly) NSString * callerBundleIdentifier; 
@property (nonatomic,readonly) NSDictionary * authorizationOptions; 
@property (getter=isCallerManaged,nonatomic,readonly) BOOL callerManaged; 
@property (nonatomic,readonly) NSString * callerTeamIdentifier; 
@property (nonatomic,readonly) NSString * localizedCallerDisplayName; 
-(void)completeWithError:(id)arg1 ;
-(NSDictionary *)httpHeaders;
-(NSString *)realm;
-(void)complete;
-(NSString *)localizedCallerDisplayName;
-(NSDictionary *)authorizationOptions;
-(NSDictionary *)extensionData;
-(NSString *)callerBundleIdentifier;
-(void)cancel;
-(BOOL)isCallerManaged;
-(NSData *)httpBody;
-(NSString *)callerTeamIdentifier;
-(NSString *)requestedOperation;
-(id)initWithAuthorizationRequest:(id)arg1 ;
-(SOAuthorizationRequest *)authorizationRequest;
-(void)doNotHandle;
-(void)completeWithHTTPAuthorizationHeaders:(id)arg1 ;
-(void)completeWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(void)presentAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)url;
@end
