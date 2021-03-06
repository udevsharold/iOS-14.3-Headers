/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCommand.h>
#import <libobjc.A.dylib/SFIndexedUserActivityCommand.h>
@class NSString, NSDictionary, NSData;


@protocol SFIndexedUserActivityCommand <SFCommand>
@property (nonatomic,copy) NSString * userActivityRequiredString; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)userActivityRequiredString;
-(NSData *)jsonData;
-(NSString *)applicationBundleIdentifier;
-(void)setUserActivityRequiredString:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(void)setApplicationBundleIdentifier:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFIndexedUserActivityCommand : SFCommand <SFIndexedUserActivityCommand, NSSecureCoding, NSCopying> {

	NSString* _userActivityRequiredString;
	NSString* _applicationBundleIdentifier;

}

@property (nonatomic,copy) NSString * userActivityRequiredString;                    //@synthesize userActivityRequiredString=_userActivityRequiredString - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;                   //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)userActivityRequiredString;
-(NSData *)jsonData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(void)setUserActivityRequiredString:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

