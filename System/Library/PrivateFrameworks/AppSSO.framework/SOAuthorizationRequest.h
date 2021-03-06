/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SOHostExtensionContextProtocol;
@class SOAuthorizationRequestParameters, SOAuthorizationCredential, NSError, NSURL, NSString, NSDictionary, NSData;

@interface SOAuthorizationRequest : NSObject {

	SOAuthorizationRequestParameters* _requestParameters;
	id<SOHostExtensionContextProtocol> _hostExtensionContext;
	BOOL _authorizationCanceled;
	SOAuthorizationCredential* _canceledAuthorizationCredential;
	NSError* _canceledAuthorizationError;

}

@property (assign,getter=isAuthorizationCanceled,nonatomic) BOOL authorizationCanceled;                //@synthesize authorizationCanceled=_authorizationCanceled - In the implementation block
@property (nonatomic,retain) SOAuthorizationCredential * canceledAuthorizationCredential;              //@synthesize canceledAuthorizationCredential=_canceledAuthorizationCredential - In the implementation block
@property (nonatomic,retain) NSError * canceledAuthorizationError;                                     //@synthesize canceledAuthorizationError=_canceledAuthorizationError - In the implementation block
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSString * requestedOperation; 
@property (nonatomic,retain) NSDictionary * httpHeaders; 
@property (nonatomic,retain) NSData * httpBody; 
@property (nonatomic,retain) NSString * realm; 
@property (nonatomic,retain) NSDictionary * extensionData; 
@property (nonatomic,retain) NSString * callerBundleIdentifier; 
@property (nonatomic,retain) NSData * auditTokenData; 
@property (nonatomic,retain) NSDictionary * authorizationOptions; 
@property (assign,getter=isCallerManaged,nonatomic) BOOL callerManaged; 
@property (nonatomic,retain) NSString * callerTeamIdentifier; 
@property (nonatomic,retain) NSString * localizedCallerDisplayName; 
-(NSData *)auditTokenData;
-(void)setAuthorizationOptions:(NSDictionary *)arg1 ;
-(void)completeWithError:(id)arg1 ;
-(NSDictionary *)httpHeaders;
-(NSString *)realm;
-(void)setAuditTokenData:(NSData *)arg1 ;
-(void)setCallerBundleIdentifier:(NSString *)arg1 ;
-(void)setCallerTeamIdentifier:(NSString *)arg1 ;
-(void)complete;
-(NSString *)localizedCallerDisplayName;
-(void)setLocalizedCallerDisplayName:(NSString *)arg1 ;
-(void)setCallerManaged:(BOOL)arg1 ;
-(NSDictionary *)authorizationOptions;
-(void)setRequestedOperation:(NSString *)arg1 ;
-(NSDictionary *)extensionData;
-(void)setExtensionData:(NSDictionary *)arg1 ;
-(NSString *)callerBundleIdentifier;
-(void)setRealm:(NSString *)arg1 ;
-(void)cancel;
-(BOOL)isCallerManaged;
-(NSData *)httpBody;
-(NSString *)callerTeamIdentifier;
-(NSString *)requestedOperation;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(id)initWithRequestParameters:(id)arg1 hostExtensionContext:(id)arg2 ;
-(void)setAuthorizationCanceled:(BOOL)arg1 ;
-(void)setCanceledAuthorizationCredential:(SOAuthorizationCredential *)arg1 ;
-(void)setCanceledAuthorizationError:(NSError *)arg1 ;
-(SOAuthorizationCredential *)canceledAuthorizationCredential;
-(NSError *)canceledAuthorizationError;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)isAuthorizationCanceled;
-(BOOL)_isUserInterfaceAllowed;
-(void)doNotHandle;
-(void)completeWithHTTPAuthorizationHeaders:(id)arg1 ;
-(void)completeWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(void)presentAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)url;
-(void)setHttpBody:(NSData *)arg1 ;
@end

