/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSString;

@interface VUIMediaEntitiesToGroupsValueTransformer : NSValueTransformer {

	BOOL _performDefaultSort;
	NSString* _identifierKeyPath;
	NSString* _sortIndexKeyPath;
	/*^block*/id _groupsSortComparator;

}

@property (nonatomic,copy) NSString * identifierKeyPath;              //@synthesize identifierKeyPath=_identifierKeyPath - In the implementation block
@property (nonatomic,copy) NSString * sortIndexKeyPath;               //@synthesize sortIndexKeyPath=_sortIndexKeyPath - In the implementation block
@property (nonatomic,copy) id groupsSortComparator;                   //@synthesize groupsSortComparator=_groupsSortComparator - In the implementation block
@property (assign,nonatomic) BOOL performDefaultSort;                 //@synthesize performDefaultSort=_performDefaultSort - In the implementation block
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)initWithIdentifierKeyPath:(id)arg1 ;
-(void)setGroupsSortComparator:(id)arg1 ;
-(void)setPerformDefaultSort:(BOOL)arg1 ;
-(void)setSortIndexKeyPath:(NSString *)arg1 ;
-(NSString *)identifierKeyPath;
-(NSString *)sortIndexKeyPath;
-(id)groupsSortComparator;
-(BOOL)performDefaultSort;
-(void)setIdentifierKeyPath:(NSString *)arg1 ;
@end

