/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface TSCEWrappedCellRef : NSObject <NSCopying> {

	TSCECellRef _cellRef;

}

@property (nonatomic,readonly) TSCECellRef cellRef;                           //@synthesize cellRef=_cellRef - In the implementation block
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> tableUID; 
@property (nonatomic,readonly) TSUCellCoord coordinate; 
@property (nonatomic,retain,readonly) NSUUID * tableID; 
+(id)invalidCellRef;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid;
-(TSUCellCoord)coordinate;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)tableID;
-(TSCECellRef)cellRef;
-(UUIDData<TSP::UUIDData>)tableUID;
-(id)initWithCellRef:(const TSCECellRef*)arg1 ;
-(id)initWithCellCoord:(TSUCellCoord)arg1 tableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(id)initWithCellCoord:(TSUCellCoord)arg1 tableID:(id)arg2 ;
@end

