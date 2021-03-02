/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPredicate;

@interface CNContactFilter : NSObject <NSCopying> {

	BOOL _rankSortedResults;
	NSString* _fullTextString;

}

@property (nonatomic,copy) NSString * fullTextString;                //@synthesize fullTextString=_fullTextString - In the implementation block
@property (nonatomic,readonly) BOOL supportsSections; 
@property (nonatomic,readonly) NSPredicate * predicate; 
@property (assign,nonatomic) BOOL rankSortedResults;                 //@synthesize rankSortedResults=_rankSortedResults - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)fullTextString;
-(void)setFullTextString:(NSString *)arg1 ;
-(BOOL)rankSortedResults;
-(void)setRankSortedResults:(BOOL)arg1 ;
-(id)description;
-(BOOL)supportsSections;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSPredicate *)predicate;
@end
