/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class CoreThemeDocument;

@interface TDThemeSchema : NSObject {

	CoreThemeDocument* _doc;

}
+(BOOL)loadThemeConstantsForEntity:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
-(id)initWithThemeDocument:(id)arg1 ;
-(void)resetThemeConstants;
-(void)sanityCheckAndUpdateDocumentIfNecessary;
-(void)_sanityCheckSchemaPartDefinitionsForStandardElement:(const SCD_Struct_TD18*)arg1 withElement:(id)arg2 ;
-(void)_addSchemaPartDefinitionsForStandardElement:(const SCD_Struct_TD18*)arg1 withElement:(id)arg2 ;
-(BOOL)_renditionKey:(const renditionkeytoken*)arg1 isEqualToKeyIgnoringLook:(const renditionkeytoken*)arg2 ;
-(void)_sanityCheckObjectsWithEntityName:(id)arg1 globalDescriptor:(void*)arg2 matchIdentifierOnly:(BOOL)arg3 ;
-(void)_sanityCheckMetafontSizeSelectorsAndUpdateIfNecessary;
-(void)_sanityCheckSchemaCategoriesAndUpdateIfNecessary;
-(void)_sanityCheckSchemaDefinitionsAndUpdateIfNecessary;
-(void)_sanityCheckSchemaAssets;
-(void)_sanityCheckColorNamesAndUpdateIfNecessary;
-(void)_sanityCheckEffectRenditionsAndUpdateIfNecessary;
-(void)_sanityCheckMicaRenditionsAndUpdateIfNecessary;
-(void)_loadConstantForEntity:(id)arg1 withDescriptor:(const themeconstant*)arg2 ;
-(void)loadThemeSizes;
-(void)loadThemeValues;
-(void)loadThemeElements;
-(void)loadThemeParts;
-(void)loadThemeStates;
-(void)loadThemePresentationStates;
-(void)loadThemeDirections;
-(void)loadThemeDrawingLayers;
-(void)loadThemeIdioms;
-(void)loadThemeDisplayGamuts;
-(void)loadThemeDeploymentTargets;
-(void)loadThemeCompressionTypes;
-(void)loadTexturePixelFormats;
-(void)loadThemeTextureFaces;
-(void)loadThemeTextureInterpretations;
-(void)loadThemeGraphicsFeatureSetClasses;
-(void)loadThemeUISizeClasses;
-(void)loadIterationTypes;
-(void)loadRenditionTypes;
-(void)loadRenditionSubtypes;
-(void)loadColorStatuses;
-(void)loadMetafontSelectors;
-(void)loadMetafontSizes;
-(void)loadColorNames;
-(void)loadSchemaCategories;
-(void)loadSchemaDefinitions;
-(void)loadEffectConstants;
-(void)loadTemplateRenderingModeConstants;
-(void)loadGlyphSizeConstants;
-(void)loadGlyphWeightConstants;
-(void)loadBasicThemePart;
-(void)loadStandardEffectDefinitions;
@end

