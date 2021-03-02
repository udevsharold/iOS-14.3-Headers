/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface PLRevGeoCompoundNameInfo : NSObject <NSSecureCoding> {

	BOOL _isContinuation;
	BOOL _suffixWhenPrefixOnly;
	NSString* _namePrefix;
	NSString* _nameSuffix;
	NSArray* _sortedNames;

}

@property (nonatomic,copy,readonly) NSString * namePrefix;              //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameSuffix;              //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sortedNames;              //@synthesize sortedNames=_sortedNames - In the implementation block
@property (nonatomic,readonly) BOOL isContinuation;                     //@synthesize isContinuation=_isContinuation - In the implementation block
@property (nonatomic,readonly) BOOL suffixWhenPrefixOnly;               //@synthesize suffixWhenPrefixOnly=_suffixWhenPrefixOnly - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_localizedNameForName:(id)arg1 ;
-(NSString *)nameSuffix;
-(NSString *)namePrefix;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)localizedSortedNames;
-(id)localizedTitleForNameInfo;
-(id)initWithNamePrefix:(id)arg1 nameSuffix:(id)arg2 sortedNames:(id)arg3 isContinuation:(BOOL)arg4 suffixWhenPrefixOnly:(BOOL)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isContinuation;
-(BOOL)suffixWhenPrefixOnly;
-(NSArray *)sortedNames;
-(void)encodeWithCoder:(id)arg1 ;
@end
