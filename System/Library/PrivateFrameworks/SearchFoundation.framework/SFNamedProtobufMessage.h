/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFNamedProtobufMessage.h>
@class NSData, NSString, NSDictionary;


@protocol SFNamedProtobufMessage <NSObject>
@property (nonatomic,copy) NSData * protobufMessageData; 
@property (nonatomic,copy) NSString * protobufMessageName; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(void)setProtobufMessageData:(id)arg1;
-(void)setProtobufMessageName:(id)arg1;
-(NSData *)protobufMessageData;
-(NSString *)protobufMessageName;
-(NSDictionary *)dictionaryRepresentation;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSDictionary;

@interface SFNamedProtobufMessage : NSObject <SFNamedProtobufMessage, NSSecureCoding, NSCopying> {

	NSData* _protobufMessageData;
	NSString* _protobufMessageName;

}

@property (nonatomic,copy) NSData * protobufMessageData;                             //@synthesize protobufMessageData=_protobufMessageData - In the implementation block
@property (nonatomic,copy) NSString * protobufMessageName;                           //@synthesize protobufMessageName=_protobufMessageName - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSData *)jsonData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setProtobufMessageData:(NSData *)arg1 ;
-(void)setProtobufMessageName:(NSString *)arg1 ;
-(NSData *)protobufMessageData;
-(NSString *)protobufMessageName;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
@end
