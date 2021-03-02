/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSDictionary, NSArray, NSString;

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding> {

	NSDictionary* _codeResponses;
	NSDictionary* _errors;
	NSDictionary* _redeemedCodes;

}

@property (nonatomic,copy,readonly) NSArray * codeResponses; 
@property (nonatomic,readonly) NSArray * failedCodes; 
@property (nonatomic,copy,readonly) NSArray * redeemedCodes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(NSArray *)codeResponses;
-(id)dictionaryForCode:(id)arg1 ;
-(NSArray *)failedCodes;
-(NSArray *)redeemedCodes;
-(id)responseDictionaryForCode:(id)arg1 ;
-(void)setCodeResponses:(NSArray *)arg1 ;
-(void)setFailedCodes:(NSArray *)arg1 ;
-(void)setRedeemedCodes:(NSArray *)arg1 ;
-(id)errorForCode:(id)arg1 ;
@end
