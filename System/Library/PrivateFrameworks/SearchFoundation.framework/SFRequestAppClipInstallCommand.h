/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCommand.h>
#import <libobjc.A.dylib/SFRequestAppClipInstallCommand.h>
@class NSURL, NSDictionary, NSData;


@protocol SFRequestAppClipInstallCommand <SFCommand>
@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(NSDictionary *)dictionaryRepresentation;
-(void)setUrl:(id)arg1;
-(NSURL *)url;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary, NSData, NSString;

@interface SFRequestAppClipInstallCommand : SFCommand <SFRequestAppClipInstallCommand, NSSecureCoding, NSCopying> {

	NSURL* _url;

}

@property (nonatomic,copy) NSURL * url;                                              //@synthesize url=_url - In the implementation block
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
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)encodeWithCoder:(id)arg1 ;
@end

