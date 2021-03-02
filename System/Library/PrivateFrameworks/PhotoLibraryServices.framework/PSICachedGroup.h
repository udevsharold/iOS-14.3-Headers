/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PSICachedGroup : NSObject <NSCopying> {

	NSString* _text;
	NSString* _identifier;
	unsigned long long _category;
	unsigned long long _owningGroupId;
	unsigned long long _groupId;

}

@property (nonatomic,readonly) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                   //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long owningGroupId;              //@synthesize owningGroupId=_owningGroupId - In the implementation block
@property (assign,nonatomic) unsigned long long groupId;                      //@synthesize groupId=_groupId - In the implementation block
-(unsigned long long)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(unsigned long long)hash;
-(id)initWithText:(id)arg1 identifier:(id)arg2 category:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4 ;
-(NSString *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)groupId;
-(void)setGroupId:(unsigned long long)arg1 ;
-(unsigned long long)owningGroupId;
@end
