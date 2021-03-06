/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSString, NSNumber, NSDictionary;

@interface MKWebMessage : NSObject <NSCopying> {

	NSString* _type;
	NSString* _caller;
	NSString* _callee;
	NSString* _method;
	NSNumber* _callNumber;
	NSString* _status;
	id<NSCopying> _arguments;
	id<NSCopying> _result;
	NSString* _errorMessage;

}

@property (nonatomic,copy,readonly) NSDictionary * JSONObject; 
@property (nonatomic,copy) NSString * type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * caller;                               //@synthesize caller=_caller - In the implementation block
@property (nonatomic,copy) NSString * callee;                               //@synthesize callee=_callee - In the implementation block
@property (nonatomic,copy) NSString * method;                               //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSNumber * callNumber;                           //@synthesize callNumber=_callNumber - In the implementation block
@property (nonatomic,copy) NSString * status;                               //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) id<NSCopying> arguments;                         //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy) id<NSCopying> result;                            //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;                         //@synthesize errorMessage=_errorMessage - In the implementation block
-(void)setResult:(id<NSCopying>)arg1 ;
-(id<NSCopying>)result;
-(NSString *)caller;
-(void)setArguments:(id<NSCopying>)arg1 ;
-(void)setCaller:(NSString *)arg1 ;
-(NSString *)callee;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(NSString *)method;
-(id<NSCopying>)arguments;
-(NSString *)status;
-(void)setErrorMessage:(NSString *)arg1 ;
-(id)description;
-(NSString *)type;
-(void)setMethod:(NSString *)arg1 ;
-(NSDictionary *)JSONObject;
-(id)initWithJSONObject:(id)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(void)setCallee:(NSString *)arg1 ;
-(NSNumber *)callNumber;
-(void)setCallNumber:(NSNumber *)arg1 ;
@end

