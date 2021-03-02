/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLResourceRecipe.h>

@interface PLPrimaryResourceDataStoreDataRecipe : PLResourceRecipe {

	unsigned _recipeID;

}

@property (assign,nonatomic) unsigned recipeID;              //@synthesize recipeID=_recipeID - In the implementation block
-(unsigned)recipeID;
-(void)setRecipeID:(unsigned)arg1 ;
-(id)initWithRecipeID:(unsigned)arg1 ;
-(id)description;
-(id)supportedVersionsForLocalResourceGeneration;
-(id)utiInContext:(id)arg1 ;
-(id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2 ;
-(void)generateAndStoreForAsset:(id)arg1 version:(unsigned)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id*)arg5 reason:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)codecInContext:(id)arg1 ;
-(id)chooseIngredientsFrom:(id)arg1 version:(unsigned)arg2 ;
@end
