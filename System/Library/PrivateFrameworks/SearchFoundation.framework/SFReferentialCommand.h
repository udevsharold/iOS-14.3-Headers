/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFReferentialCommand.h>
@class NSString, NSDictionary, NSData;


@protocol SFReferentialCommand <NSObject>
@property (nonatomic,copy) NSString * referenceIdentifier; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(void)setReferenceIdentifier:(id)arg1;
-(NSString *)referenceIdentifier;
-(NSDictionary *)dictionaryRepresentation;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFReferentialCommand : NSObject <SFReferentialCommand, NSSecureCoding, NSCopying> {

	NSString* _referenceIdentifier;

}

@property (nonatomic,copy) NSString * referenceIdentifier;                           //@synthesize referenceIdentifier=_referenceIdentifier - In the implementation block
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
-(void)setReferenceIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)referenceIdentifier;
-(NSDictionary *)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
@end

