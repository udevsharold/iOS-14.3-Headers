/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet;

@interface TSCERemoteDataSpecifierSet : NSObject <NSCopying> {

	unordered_map<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *> > >* _coldDataByYear;
	NSMutableSet* _hotData;

}

@property (nonatomic,retain) NSMutableSet * hotData;                  //@synthesize hotData=_hotData - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(id)set;
+(id)setWithSpecifierArray:(id)arg1 ;
+(id)setWithSpecifiers:(id)arg1 ;
+(id)setWithSpecifier:(id)arg1 ;
-(id)init;
-(BOOL)containsSpecifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithSpecifiers:(id)arg1 ;
-(id)description;
-(id)allSpecifiers;
-(BOOL)isEqual:(id)arg1 ;
-(id)setByIntersectingWithSet:(id)arg1 ;
-(unsigned long long)count;
-(id)shortDescription;
-(void)removeAllSpecifiers;
-(void)removeSpecifier:(id)arg1 ;
-(NSMutableSet *)hotData;
-(id)setOfSpecifiersNotContainedInSet:(id)arg1 ;
-(void)insertSpecifiersFromSet:(id)arg1 ;
-(void)removeSpecifiersFromSet:(id)arg1 ;
-(BOOL)containsColdSpecifiers;
-(id)hotSpecifierSet;
-(void)insertSpecifier:(id)arg1 ;
-(void)enumerateSpecifiersWithBlock:(/*^block*/id)arg1 ;
-(id)hotSpecifiers;
-(id)coldSpecifiers;
-(id)hotSpecifierArray;
-(id)yearsReferenced;
-(id)coldSpecifierArrayForYear:(unsigned long long)arg1 ;
-(void)insertSpecifiersFromArray:(id)arg1 ;
-(id)setOfSpecifiersContainedInSet:(id)arg1 ;
-(id)coldSpecifierSet;
-(BOOL)containsSpecifiersWithSymbol:(id)arg1 ;
-(BOOL)containsSpecifiersFromSet:(id)arg1 ;
-(id)setByIntersectingWithSymbolsOfSet:(id)arg1 ;
-(id)allSymbols;
-(id)setByRemovingSpecifiersFromSet:(id)arg1 ;
-(id)initWithSpecifierArray:(id)arg1 ;
-(void)p_enumerateYearSetsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)p_coldSpecifierCount;
-(id)setOfSpecifiersPassingTest:(/*^block*/id)arg1 ;
-(id)p_description:(BOOL)arg1 ;
-(void)removeSpecifiersFromArray:(id)arg1 ;
-(id)coldSpecifiersForYear:(unsigned long long)arg1 ;
-(id)sortedArrayOfSpecifiers;
-(id)setByRemovingSpecifiersWithSymbols:(id)arg1 ;
-(id)setOfSpecifiersWithSymbol:(id)arg1 ;
-(id)setOfSpecifiersWithDate:(id)arg1 ;
-(void)setHotData:(NSMutableSet *)arg1 ;
@end
