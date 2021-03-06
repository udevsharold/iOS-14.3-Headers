/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCommand.h>
#import <libobjc.A.dylib/SFOpenFileProviderItemCommand.h>
@class NSString, NSDictionary, NSData;


@protocol SFOpenFileProviderItemCommand <SFCommand>
@property (nonatomic,copy) NSString * coreSpotlightIdentifier; 
@property (nonatomic,copy) NSString * fileProviderIdentifier; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(NSString *)coreSpotlightIdentifier;
-(void)setCoreSpotlightIdentifier:(id)arg1;
-(NSString *)fileProviderIdentifier;
-(void)setFileProviderIdentifier:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFOpenFileProviderItemCommand : SFCommand <SFOpenFileProviderItemCommand, NSSecureCoding, NSCopying> {

	NSString* _coreSpotlightIdentifier;
	NSString* _fileProviderIdentifier;

}

@property (nonatomic,copy) NSString * coreSpotlightIdentifier;                       //@synthesize coreSpotlightIdentifier=_coreSpotlightIdentifier - In the implementation block
@property (nonatomic,copy) NSString * fileProviderIdentifier;                        //@synthesize fileProviderIdentifier=_fileProviderIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSData *)jsonData;
-(NSString *)coreSpotlightIdentifier;
-(void)setCoreSpotlightIdentifier:(NSString *)arg1 ;
-(NSString *)fileProviderIdentifier;
-(void)setFileProviderIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
@end

