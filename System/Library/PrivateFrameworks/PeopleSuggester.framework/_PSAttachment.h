/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSUUID, NSURL;

@interface _PSAttachment : NSObject <NSSecureCoding> {

	NSDate* _creationDate;
	NSString* _UTI;
	NSString* _photoLocalIdentifier;
	NSUUID* _identifier;
	NSUUID* _cloudIdentifier;
	NSURL* _contentURL;
	NSString* _contentText;

}

@property (nonatomic,copy,readonly) NSDate * creationDate;                        //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * UTI;                               //@synthesize UTI=_UTI - In the implementation block
@property (nonatomic,copy,readonly) NSString * photoLocalIdentifier;              //@synthesize photoLocalIdentifier=_photoLocalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * cloudIdentifier;                     //@synthesize cloudIdentifier=_cloudIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * contentURL;                           //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentText;                       //@synthesize contentText=_contentText - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)creationDate;
-(NSURL *)contentURL;
-(NSString *)contentText;
-(NSUUID *)cloudIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCreationDate:(id)arg1 UTI:(id)arg2 photoLocalIdentifier:(id)arg3 identifier:(id)arg4 cloudIdentifier:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7 ;
-(NSUUID *)identifier;
-(id)description;
-(NSString *)UTI;
-(NSString *)photoLocalIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
@end
