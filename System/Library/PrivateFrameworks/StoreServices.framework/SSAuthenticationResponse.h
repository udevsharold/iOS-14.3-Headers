/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSHTTPURLResponse, NSString, NSNumber;

@interface SSAuthenticationResponse : NSObject {

	NSDictionary* _responseDictionary;
	long long _urlBagType;
	NSHTTPURLResponse* _urlResponse;

}

@property (assign) long long URLBagType;                                       //@synthesize urlBagType=_urlBagType - In the implementation block
@property (readonly) NSDictionary * responseDictionary;                        //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (readonly) NSHTTPURLResponse * URLResponse; 
@property (readonly) NSString * accountName; 
@property (readonly) long long accountKind; 
@property (readonly) NSNumber * accountUniqueIdentifier; 
@property (readonly) long long availableServiceTypes; 
@property (readonly) NSString * creditsString; 
@property (readonly) long long enabledServiceTypes; 
@property (getter=isManagedStudent,readonly) BOOL managedStudent; 
@property (getter=isNewCustomer,readonly) BOOL newCustomer; 
@property (readonly) NSString * storeFrontIdentifier; 
@property (readonly) NSString * token; 
@property (readonly) NSNumber * failureType; 
@property (readonly) long long responseType; 
@property (readonly) NSString * userMessage; 
-(id)altDSID;
-(BOOL)isNewCustomer;
-(void)setURLBagType:(long long)arg1 ;
-(id)newAccount;
-(NSNumber *)failureType;
-(id)initWithURLResponse:(id)arg1 dictionary:(id)arg2 ;
-(id)_valueForFirstAvailableKey:(id)arg1 ;
-(NSNumber *)accountUniqueIdentifier;
-(BOOL)isManagedStudent;
-(long long)_responseTypeForFailureType:(long long)arg1 ;
-(long long)_responseTypeForErrorNumber:(long long)arg1 ;
-(long long)_responseTypeForStatusValue:(long long)arg1 ;
-(NSString *)accountName;
-(long long)availableServiceTypes;
-(NSString *)storeFrontIdentifier;
-(NSString *)token;
-(long long)enabledServiceTypes;
-(long long)accountKind;
-(long long)responseType;
-(NSString *)creditsString;
-(long long)URLBagType;
-(NSDictionary *)responseDictionary;
-(NSString *)userMessage;
-(NSHTTPURLResponse *)URLResponse;
@end

