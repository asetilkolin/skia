#ifndef __DEFINED__SkPdfGraphicsStateDictionary
#define __DEFINED__SkPdfGraphicsStateDictionary

#include "SkPdfEnums_autogen.h"
#include "SkPdfArray_autogen.h"
#include "SkPdfDictionary_autogen.h"

// Entries in a graphics state parameter dictionary
class SkPdfGraphicsStateDictionary : public SkPdfDictionary {
public:
  virtual SkPdfObjectType getType() const { return kGraphicsStateDictionary_SkPdfObjectType;}
  virtual SkPdfObjectType getTypeEnd() const { return (SkPdfObjectType)(kGraphicsStateDictionary_SkPdfObjectType + 1);}
public:
  virtual SkPdfGraphicsStateDictionary* asGraphicsStateDictionary() {return this;}
  virtual const SkPdfGraphicsStateDictionary* asGraphicsStateDictionary() const {return this;}

private:
  virtual SkPdfALinkAnnotationDictionary* asALinkAnnotationDictionary() {return NULL;}
  virtual const SkPdfALinkAnnotationDictionary* asALinkAnnotationDictionary() const {return NULL;}

  virtual SkPdfActionDictionary* asActionDictionary() {return NULL;}
  virtual const SkPdfActionDictionary* asActionDictionary() const {return NULL;}

  virtual SkPdfAlternateImageDictionary* asAlternateImageDictionary() {return NULL;}
  virtual const SkPdfAlternateImageDictionary* asAlternateImageDictionary() const {return NULL;}

  virtual SkPdfAnnotationActionsDictionary* asAnnotationActionsDictionary() {return NULL;}
  virtual const SkPdfAnnotationActionsDictionary* asAnnotationActionsDictionary() const {return NULL;}

  virtual SkPdfAnnotationDictionary* asAnnotationDictionary() {return NULL;}
  virtual const SkPdfAnnotationDictionary* asAnnotationDictionary() const {return NULL;}

  virtual SkPdfAppearanceCharacteristicsDictionary* asAppearanceCharacteristicsDictionary() {return NULL;}
  virtual const SkPdfAppearanceCharacteristicsDictionary* asAppearanceCharacteristicsDictionary() const {return NULL;}

  virtual SkPdfAppearanceDictionary* asAppearanceDictionary() {return NULL;}
  virtual const SkPdfAppearanceDictionary* asAppearanceDictionary() const {return NULL;}

  virtual SkPdfApplicationDataDictionary* asApplicationDataDictionary() {return NULL;}
  virtual const SkPdfApplicationDataDictionary* asApplicationDataDictionary() const {return NULL;}

  virtual SkPdfArtifactsDictionary* asArtifactsDictionary() {return NULL;}
  virtual const SkPdfArtifactsDictionary* asArtifactsDictionary() const {return NULL;}

  virtual SkPdfAttributeObjectDictionary* asAttributeObjectDictionary() {return NULL;}
  virtual const SkPdfAttributeObjectDictionary* asAttributeObjectDictionary() const {return NULL;}

  virtual SkPdfBeadDictionary* asBeadDictionary() {return NULL;}
  virtual const SkPdfBeadDictionary* asBeadDictionary() const {return NULL;}

  virtual SkPdfBlockLevelStructureElementsDictionary* asBlockLevelStructureElementsDictionary() {return NULL;}
  virtual const SkPdfBlockLevelStructureElementsDictionary* asBlockLevelStructureElementsDictionary() const {return NULL;}

  virtual SkPdfBorderStyleDictionary* asBorderStyleDictionary() {return NULL;}
  virtual const SkPdfBorderStyleDictionary* asBorderStyleDictionary() const {return NULL;}

  virtual SkPdfBoxColorInformationDictionary* asBoxColorInformationDictionary() {return NULL;}
  virtual const SkPdfBoxColorInformationDictionary* asBoxColorInformationDictionary() const {return NULL;}

  virtual SkPdfBoxStyleDictionary* asBoxStyleDictionary() {return NULL;}
  virtual const SkPdfBoxStyleDictionary* asBoxStyleDictionary() const {return NULL;}

  virtual SkPdfCIDFontDescriptorDictionary* asCIDFontDescriptorDictionary() {return NULL;}
  virtual const SkPdfCIDFontDescriptorDictionary* asCIDFontDescriptorDictionary() const {return NULL;}

  virtual SkPdfCIDSystemInfoDictionary* asCIDSystemInfoDictionary() {return NULL;}
  virtual const SkPdfCIDSystemInfoDictionary* asCIDSystemInfoDictionary() const {return NULL;}

  virtual SkPdfCMapDictionary* asCMapDictionary() {return NULL;}
  virtual const SkPdfCMapDictionary* asCMapDictionary() const {return NULL;}

  virtual SkPdfCalgrayColorSpaceDictionary* asCalgrayColorSpaceDictionary() {return NULL;}
  virtual const SkPdfCalgrayColorSpaceDictionary* asCalgrayColorSpaceDictionary() const {return NULL;}

  virtual SkPdfCalrgbColorSpaceDictionary* asCalrgbColorSpaceDictionary() {return NULL;}
  virtual const SkPdfCalrgbColorSpaceDictionary* asCalrgbColorSpaceDictionary() const {return NULL;}

  virtual SkPdfCatalogDictionary* asCatalogDictionary() {return NULL;}
  virtual const SkPdfCatalogDictionary* asCatalogDictionary() const {return NULL;}

  virtual SkPdfCcittfaxdecodeFilterDictionary* asCcittfaxdecodeFilterDictionary() {return NULL;}
  virtual const SkPdfCcittfaxdecodeFilterDictionary* asCcittfaxdecodeFilterDictionary() const {return NULL;}

  virtual SkPdfCheckboxFieldDictionary* asCheckboxFieldDictionary() {return NULL;}
  virtual const SkPdfCheckboxFieldDictionary* asCheckboxFieldDictionary() const {return NULL;}

  virtual SkPdfChoiceFieldDictionary* asChoiceFieldDictionary() {return NULL;}
  virtual const SkPdfChoiceFieldDictionary* asChoiceFieldDictionary() const {return NULL;}

  virtual SkPdfComponentsWithMetadataDictionary* asComponentsWithMetadataDictionary() {return NULL;}
  virtual const SkPdfComponentsWithMetadataDictionary* asComponentsWithMetadataDictionary() const {return NULL;}

  virtual SkPdfDctdecodeFilterDictionary* asDctdecodeFilterDictionary() {return NULL;}
  virtual const SkPdfDctdecodeFilterDictionary* asDctdecodeFilterDictionary() const {return NULL;}

  virtual SkPdfDeviceNColorSpaceDictionary* asDeviceNColorSpaceDictionary() {return NULL;}
  virtual const SkPdfDeviceNColorSpaceDictionary* asDeviceNColorSpaceDictionary() const {return NULL;}

  virtual SkPdfDocumentCatalogActionsDictionary* asDocumentCatalogActionsDictionary() {return NULL;}
  virtual const SkPdfDocumentCatalogActionsDictionary* asDocumentCatalogActionsDictionary() const {return NULL;}

  virtual SkPdfDocumentInformationDictionary* asDocumentInformationDictionary() {return NULL;}
  virtual const SkPdfDocumentInformationDictionary* asDocumentInformationDictionary() const {return NULL;}

  virtual SkPdfEmbeddedFileParameterDictionary* asEmbeddedFileParameterDictionary() {return NULL;}
  virtual const SkPdfEmbeddedFileParameterDictionary* asEmbeddedFileParameterDictionary() const {return NULL;}

  virtual SkPdfEmbeddedFileStreamDictionary* asEmbeddedFileStreamDictionary() {return NULL;}
  virtual const SkPdfEmbeddedFileStreamDictionary* asEmbeddedFileStreamDictionary() const {return NULL;}

  virtual SkPdfEmbeddedFontStreamDictionary* asEmbeddedFontStreamDictionary() {return NULL;}
  virtual const SkPdfEmbeddedFontStreamDictionary* asEmbeddedFontStreamDictionary() const {return NULL;}

  virtual SkPdfEncodingDictionary* asEncodingDictionary() {return NULL;}
  virtual const SkPdfEncodingDictionary* asEncodingDictionary() const {return NULL;}

  virtual SkPdfEncryptedEmbeddedFileStreamDictionary* asEncryptedEmbeddedFileStreamDictionary() {return NULL;}
  virtual const SkPdfEncryptedEmbeddedFileStreamDictionary* asEncryptedEmbeddedFileStreamDictionary() const {return NULL;}

  virtual SkPdfEncryptionCommonDictionary* asEncryptionCommonDictionary() {return NULL;}
  virtual const SkPdfEncryptionCommonDictionary* asEncryptionCommonDictionary() const {return NULL;}

  virtual SkPdfFDFCatalogDictionary* asFDFCatalogDictionary() {return NULL;}
  virtual const SkPdfFDFCatalogDictionary* asFDFCatalogDictionary() const {return NULL;}

  virtual SkPdfFDFDictionary* asFDFDictionary() {return NULL;}
  virtual const SkPdfFDFDictionary* asFDFDictionary() const {return NULL;}

  virtual SkPdfFDFFieldDictionary* asFDFFieldDictionary() {return NULL;}
  virtual const SkPdfFDFFieldDictionary* asFDFFieldDictionary() const {return NULL;}

  virtual SkPdfFDFFileAnnotationDictionary* asFDFFileAnnotationDictionary() {return NULL;}
  virtual const SkPdfFDFFileAnnotationDictionary* asFDFFileAnnotationDictionary() const {return NULL;}

  virtual SkPdfFDFNamedPageReferenceDictionary* asFDFNamedPageReferenceDictionary() {return NULL;}
  virtual const SkPdfFDFNamedPageReferenceDictionary* asFDFNamedPageReferenceDictionary() const {return NULL;}

  virtual SkPdfFDFPageDictionary* asFDFPageDictionary() {return NULL;}
  virtual const SkPdfFDFPageDictionary* asFDFPageDictionary() const {return NULL;}

  virtual SkPdfFDFTemplateDictionary* asFDFTemplateDictionary() {return NULL;}
  virtual const SkPdfFDFTemplateDictionary* asFDFTemplateDictionary() const {return NULL;}

  virtual SkPdfFDFTrailerDictionary* asFDFTrailerDictionary() {return NULL;}
  virtual const SkPdfFDFTrailerDictionary* asFDFTrailerDictionary() const {return NULL;}

  virtual SkPdfFieldDictionary* asFieldDictionary() {return NULL;}
  virtual const SkPdfFieldDictionary* asFieldDictionary() const {return NULL;}

  virtual SkPdfFileAttachmentAnnotationDictionary* asFileAttachmentAnnotationDictionary() {return NULL;}
  virtual const SkPdfFileAttachmentAnnotationDictionary* asFileAttachmentAnnotationDictionary() const {return NULL;}

  virtual SkPdfFileSpecificationDictionary* asFileSpecificationDictionary() {return NULL;}
  virtual const SkPdfFileSpecificationDictionary* asFileSpecificationDictionary() const {return NULL;}

  virtual SkPdfFileTrailerDictionary* asFileTrailerDictionary() {return NULL;}
  virtual const SkPdfFileTrailerDictionary* asFileTrailerDictionary() const {return NULL;}

  virtual SkPdfFontDescriptorDictionary* asFontDescriptorDictionary() {return NULL;}
  virtual const SkPdfFontDescriptorDictionary* asFontDescriptorDictionary() const {return NULL;}

  virtual SkPdfFontDictionary* asFontDictionary() {return NULL;}
  virtual const SkPdfFontDictionary* asFontDictionary() const {return NULL;}

  virtual SkPdfCIDFontDictionary* asCIDFontDictionary() {return NULL;}
  virtual const SkPdfCIDFontDictionary* asCIDFontDictionary() const {return NULL;}

  virtual SkPdfTrueTypeFontDictionary* asTrueTypeFontDictionary() {return NULL;}
  virtual const SkPdfTrueTypeFontDictionary* asTrueTypeFontDictionary() const {return NULL;}

  virtual SkPdfType0FontDictionary* asType0FontDictionary() {return NULL;}
  virtual const SkPdfType0FontDictionary* asType0FontDictionary() const {return NULL;}

  virtual SkPdfType1FontDictionary* asType1FontDictionary() {return NULL;}
  virtual const SkPdfType1FontDictionary* asType1FontDictionary() const {return NULL;}

  virtual SkPdfMultiMasterFontDictionary* asMultiMasterFontDictionary() {return NULL;}
  virtual const SkPdfMultiMasterFontDictionary* asMultiMasterFontDictionary() const {return NULL;}

  virtual SkPdfType3FontDictionary* asType3FontDictionary() {return NULL;}
  virtual const SkPdfType3FontDictionary* asType3FontDictionary() const {return NULL;}

  virtual SkPdfFormFieldActionsDictionary* asFormFieldActionsDictionary() {return NULL;}
  virtual const SkPdfFormFieldActionsDictionary* asFormFieldActionsDictionary() const {return NULL;}

  virtual SkPdfFreeTextAnnotationDictionary* asFreeTextAnnotationDictionary() {return NULL;}
  virtual const SkPdfFreeTextAnnotationDictionary* asFreeTextAnnotationDictionary() const {return NULL;}

  virtual SkPdfFunctionCommonDictionary* asFunctionCommonDictionary() {return NULL;}
  virtual const SkPdfFunctionCommonDictionary* asFunctionCommonDictionary() const {return NULL;}

  virtual SkPdfGoToActionDictionary* asGoToActionDictionary() {return NULL;}
  virtual const SkPdfGoToActionDictionary* asGoToActionDictionary() const {return NULL;}

  virtual SkPdfGroupAttributesDictionary* asGroupAttributesDictionary() {return NULL;}
  virtual const SkPdfGroupAttributesDictionary* asGroupAttributesDictionary() const {return NULL;}

  virtual SkPdfHideActionDictionary* asHideActionDictionary() {return NULL;}
  virtual const SkPdfHideActionDictionary* asHideActionDictionary() const {return NULL;}

  virtual SkPdfIccProfileStreamDictionary* asIccProfileStreamDictionary() {return NULL;}
  virtual const SkPdfIccProfileStreamDictionary* asIccProfileStreamDictionary() const {return NULL;}

  virtual SkPdfIconFitDictionary* asIconFitDictionary() {return NULL;}
  virtual const SkPdfIconFitDictionary* asIconFitDictionary() const {return NULL;}

  virtual SkPdfImportDataActionDictionary* asImportDataActionDictionary() {return NULL;}
  virtual const SkPdfImportDataActionDictionary* asImportDataActionDictionary() const {return NULL;}

  virtual SkPdfInkAnnotationDictionary* asInkAnnotationDictionary() {return NULL;}
  virtual const SkPdfInkAnnotationDictionary* asInkAnnotationDictionary() const {return NULL;}

  virtual SkPdfInlineLevelStructureElementsDictionary* asInlineLevelStructureElementsDictionary() {return NULL;}
  virtual const SkPdfInlineLevelStructureElementsDictionary* asInlineLevelStructureElementsDictionary() const {return NULL;}

  virtual SkPdfInteractiveFormDictionary* asInteractiveFormDictionary() {return NULL;}
  virtual const SkPdfInteractiveFormDictionary* asInteractiveFormDictionary() const {return NULL;}

  virtual SkPdfJavascriptActionDictionary* asJavascriptActionDictionary() {return NULL;}
  virtual const SkPdfJavascriptActionDictionary* asJavascriptActionDictionary() const {return NULL;}

  virtual SkPdfJavascriptDictionary* asJavascriptDictionary() {return NULL;}
  virtual const SkPdfJavascriptDictionary* asJavascriptDictionary() const {return NULL;}

  virtual SkPdfJbig2DecodeFilterDictionary* asJbig2DecodeFilterDictionary() {return NULL;}
  virtual const SkPdfJbig2DecodeFilterDictionary* asJbig2DecodeFilterDictionary() const {return NULL;}

  virtual SkPdfLabColorSpaceDictionary* asLabColorSpaceDictionary() {return NULL;}
  virtual const SkPdfLabColorSpaceDictionary* asLabColorSpaceDictionary() const {return NULL;}

  virtual SkPdfLaunchActionDictionary* asLaunchActionDictionary() {return NULL;}
  virtual const SkPdfLaunchActionDictionary* asLaunchActionDictionary() const {return NULL;}

  virtual SkPdfLineAnnotationDictionary* asLineAnnotationDictionary() {return NULL;}
  virtual const SkPdfLineAnnotationDictionary* asLineAnnotationDictionary() const {return NULL;}

  virtual SkPdfListAttributeDictionary* asListAttributeDictionary() {return NULL;}
  virtual const SkPdfListAttributeDictionary* asListAttributeDictionary() const {return NULL;}

  virtual SkPdfLzwdecodeAndFlatedecodeFiltersDictionary* asLzwdecodeAndFlatedecodeFiltersDictionary() {return NULL;}
  virtual const SkPdfLzwdecodeAndFlatedecodeFiltersDictionary* asLzwdecodeAndFlatedecodeFiltersDictionary() const {return NULL;}

  virtual SkPdfMacOsFileInformationDictionary* asMacOsFileInformationDictionary() {return NULL;}
  virtual const SkPdfMacOsFileInformationDictionary* asMacOsFileInformationDictionary() const {return NULL;}

  virtual SkPdfMarkInformationDictionary* asMarkInformationDictionary() {return NULL;}
  virtual const SkPdfMarkInformationDictionary* asMarkInformationDictionary() const {return NULL;}

  virtual SkPdfMarkedContentReferenceDictionary* asMarkedContentReferenceDictionary() {return NULL;}
  virtual const SkPdfMarkedContentReferenceDictionary* asMarkedContentReferenceDictionary() const {return NULL;}

  virtual SkPdfMarkupAnnotationsDictionary* asMarkupAnnotationsDictionary() {return NULL;}
  virtual const SkPdfMarkupAnnotationsDictionary* asMarkupAnnotationsDictionary() const {return NULL;}

  virtual SkPdfMetadataStreamDictionary* asMetadataStreamDictionary() {return NULL;}
  virtual const SkPdfMetadataStreamDictionary* asMetadataStreamDictionary() const {return NULL;}

  virtual SkPdfMovieActionDictionary* asMovieActionDictionary() {return NULL;}
  virtual const SkPdfMovieActionDictionary* asMovieActionDictionary() const {return NULL;}

  virtual SkPdfMovieActivationDictionary* asMovieActivationDictionary() {return NULL;}
  virtual const SkPdfMovieActivationDictionary* asMovieActivationDictionary() const {return NULL;}

  virtual SkPdfMovieAnnotationDictionary* asMovieAnnotationDictionary() {return NULL;}
  virtual const SkPdfMovieAnnotationDictionary* asMovieAnnotationDictionary() const {return NULL;}

  virtual SkPdfMovieDictionary* asMovieDictionary() {return NULL;}
  virtual const SkPdfMovieDictionary* asMovieDictionary() const {return NULL;}

  virtual SkPdfNameDictionary* asNameDictionary() {return NULL;}
  virtual const SkPdfNameDictionary* asNameDictionary() const {return NULL;}

  virtual SkPdfNameTreeNodeDictionary* asNameTreeNodeDictionary() {return NULL;}
  virtual const SkPdfNameTreeNodeDictionary* asNameTreeNodeDictionary() const {return NULL;}

  virtual SkPdfNamedActionsDictionary* asNamedActionsDictionary() {return NULL;}
  virtual const SkPdfNamedActionsDictionary* asNamedActionsDictionary() const {return NULL;}

  virtual SkPdfNumberTreeNodeDictionary* asNumberTreeNodeDictionary() {return NULL;}
  virtual const SkPdfNumberTreeNodeDictionary* asNumberTreeNodeDictionary() const {return NULL;}

  virtual SkPdfObjectReferenceDictionary* asObjectReferenceDictionary() {return NULL;}
  virtual const SkPdfObjectReferenceDictionary* asObjectReferenceDictionary() const {return NULL;}

  virtual SkPdfOpiVersionDictionary* asOpiVersionDictionary() {return NULL;}
  virtual const SkPdfOpiVersionDictionary* asOpiVersionDictionary() const {return NULL;}

  virtual SkPdfOutlineDictionary* asOutlineDictionary() {return NULL;}
  virtual const SkPdfOutlineDictionary* asOutlineDictionary() const {return NULL;}

  virtual SkPdfOutlineItemDictionary* asOutlineItemDictionary() {return NULL;}
  virtual const SkPdfOutlineItemDictionary* asOutlineItemDictionary() const {return NULL;}

  virtual SkPdfPDF_XOutputIntentDictionary* asPDF_XOutputIntentDictionary() {return NULL;}
  virtual const SkPdfPDF_XOutputIntentDictionary* asPDF_XOutputIntentDictionary() const {return NULL;}

  virtual SkPdfPSXobjectDictionary* asPSXobjectDictionary() {return NULL;}
  virtual const SkPdfPSXobjectDictionary* asPSXobjectDictionary() const {return NULL;}

  virtual SkPdfPageLabelDictionary* asPageLabelDictionary() {return NULL;}
  virtual const SkPdfPageLabelDictionary* asPageLabelDictionary() const {return NULL;}

  virtual SkPdfPageObjectActionsDictionary* asPageObjectActionsDictionary() {return NULL;}
  virtual const SkPdfPageObjectActionsDictionary* asPageObjectActionsDictionary() const {return NULL;}

  virtual SkPdfPageObjectDictionary* asPageObjectDictionary() {return NULL;}
  virtual const SkPdfPageObjectDictionary* asPageObjectDictionary() const {return NULL;}

  virtual SkPdfPagePieceDictionary* asPagePieceDictionary() {return NULL;}
  virtual const SkPdfPagePieceDictionary* asPagePieceDictionary() const {return NULL;}

  virtual SkPdfPageTreeNodeDictionary* asPageTreeNodeDictionary() {return NULL;}
  virtual const SkPdfPageTreeNodeDictionary* asPageTreeNodeDictionary() const {return NULL;}

  virtual SkPdfPopUpAnnotationDictionary* asPopUpAnnotationDictionary() {return NULL;}
  virtual const SkPdfPopUpAnnotationDictionary* asPopUpAnnotationDictionary() const {return NULL;}

  virtual SkPdfPrinterMarkAnnotationDictionary* asPrinterMarkAnnotationDictionary() {return NULL;}
  virtual const SkPdfPrinterMarkAnnotationDictionary* asPrinterMarkAnnotationDictionary() const {return NULL;}

  virtual SkPdfPrinterMarkFormDictionary* asPrinterMarkFormDictionary() {return NULL;}
  virtual const SkPdfPrinterMarkFormDictionary* asPrinterMarkFormDictionary() const {return NULL;}

  virtual SkPdfRadioButtonFieldDictionary* asRadioButtonFieldDictionary() {return NULL;}
  virtual const SkPdfRadioButtonFieldDictionary* asRadioButtonFieldDictionary() const {return NULL;}

  virtual SkPdfReferenceDictionary* asReferenceDictionary() {return NULL;}
  virtual const SkPdfReferenceDictionary* asReferenceDictionary() const {return NULL;}

  virtual SkPdfRemoteGoToActionDictionary* asRemoteGoToActionDictionary() {return NULL;}
  virtual const SkPdfRemoteGoToActionDictionary* asRemoteGoToActionDictionary() const {return NULL;}

  virtual SkPdfResetFormActionDictionary* asResetFormActionDictionary() {return NULL;}
  virtual const SkPdfResetFormActionDictionary* asResetFormActionDictionary() const {return NULL;}

  virtual SkPdfResourceDictionary* asResourceDictionary() {return NULL;}
  virtual const SkPdfResourceDictionary* asResourceDictionary() const {return NULL;}

  virtual SkPdfRubberStampAnnotationDictionary* asRubberStampAnnotationDictionary() {return NULL;}
  virtual const SkPdfRubberStampAnnotationDictionary* asRubberStampAnnotationDictionary() const {return NULL;}

  virtual SkPdfSeparationDictionary* asSeparationDictionary() {return NULL;}
  virtual const SkPdfSeparationDictionary* asSeparationDictionary() const {return NULL;}

  virtual SkPdfShadingDictionary* asShadingDictionary() {return NULL;}
  virtual const SkPdfShadingDictionary* asShadingDictionary() const {return NULL;}

  virtual SkPdfType1ShadingDictionary* asType1ShadingDictionary() {return NULL;}
  virtual const SkPdfType1ShadingDictionary* asType1ShadingDictionary() const {return NULL;}

  virtual SkPdfType2ShadingDictionary* asType2ShadingDictionary() {return NULL;}
  virtual const SkPdfType2ShadingDictionary* asType2ShadingDictionary() const {return NULL;}

  virtual SkPdfType3ShadingDictionary* asType3ShadingDictionary() {return NULL;}
  virtual const SkPdfType3ShadingDictionary* asType3ShadingDictionary() const {return NULL;}

  virtual SkPdfType4ShadingDictionary* asType4ShadingDictionary() {return NULL;}
  virtual const SkPdfType4ShadingDictionary* asType4ShadingDictionary() const {return NULL;}

  virtual SkPdfType5ShadingDictionary* asType5ShadingDictionary() {return NULL;}
  virtual const SkPdfType5ShadingDictionary* asType5ShadingDictionary() const {return NULL;}

  virtual SkPdfType6ShadingDictionary* asType6ShadingDictionary() {return NULL;}
  virtual const SkPdfType6ShadingDictionary* asType6ShadingDictionary() const {return NULL;}

  virtual SkPdfSignatureDictionary* asSignatureDictionary() {return NULL;}
  virtual const SkPdfSignatureDictionary* asSignatureDictionary() const {return NULL;}

  virtual SkPdfSoftMaskDictionary* asSoftMaskDictionary() {return NULL;}
  virtual const SkPdfSoftMaskDictionary* asSoftMaskDictionary() const {return NULL;}

  virtual SkPdfSoftMaskImageDictionary* asSoftMaskImageDictionary() {return NULL;}
  virtual const SkPdfSoftMaskImageDictionary* asSoftMaskImageDictionary() const {return NULL;}

  virtual SkPdfSoundActionDictionary* asSoundActionDictionary() {return NULL;}
  virtual const SkPdfSoundActionDictionary* asSoundActionDictionary() const {return NULL;}

  virtual SkPdfSoundAnnotationDictionary* asSoundAnnotationDictionary() {return NULL;}
  virtual const SkPdfSoundAnnotationDictionary* asSoundAnnotationDictionary() const {return NULL;}

  virtual SkPdfSoundObjectDictionary* asSoundObjectDictionary() {return NULL;}
  virtual const SkPdfSoundObjectDictionary* asSoundObjectDictionary() const {return NULL;}

  virtual SkPdfSourceInformationDictionary* asSourceInformationDictionary() {return NULL;}
  virtual const SkPdfSourceInformationDictionary* asSourceInformationDictionary() const {return NULL;}

  virtual SkPdfSquareOrCircleAnnotation* asSquareOrCircleAnnotation() {return NULL;}
  virtual const SkPdfSquareOrCircleAnnotation* asSquareOrCircleAnnotation() const {return NULL;}

  virtual SkPdfStandardSecurityHandlerDictionary* asStandardSecurityHandlerDictionary() {return NULL;}
  virtual const SkPdfStandardSecurityHandlerDictionary* asStandardSecurityHandlerDictionary() const {return NULL;}

  virtual SkPdfStandardStructureDictionary* asStandardStructureDictionary() {return NULL;}
  virtual const SkPdfStandardStructureDictionary* asStandardStructureDictionary() const {return NULL;}

  virtual SkPdfStreamCommonDictionary* asStreamCommonDictionary() {return NULL;}
  virtual const SkPdfStreamCommonDictionary* asStreamCommonDictionary() const {return NULL;}

  virtual SkPdfStructureElementAccessDictionary* asStructureElementAccessDictionary() {return NULL;}
  virtual const SkPdfStructureElementAccessDictionary* asStructureElementAccessDictionary() const {return NULL;}

  virtual SkPdfStructureElementDictionary* asStructureElementDictionary() {return NULL;}
  virtual const SkPdfStructureElementDictionary* asStructureElementDictionary() const {return NULL;}

  virtual SkPdfStructureTreeRootDictionary* asStructureTreeRootDictionary() {return NULL;}
  virtual const SkPdfStructureTreeRootDictionary* asStructureTreeRootDictionary() const {return NULL;}

  virtual SkPdfSubmitFormActionDictionary* asSubmitFormActionDictionary() {return NULL;}
  virtual const SkPdfSubmitFormActionDictionary* asSubmitFormActionDictionary() const {return NULL;}

  virtual SkPdfTableAttributesDictionary* asTableAttributesDictionary() {return NULL;}
  virtual const SkPdfTableAttributesDictionary* asTableAttributesDictionary() const {return NULL;}

  virtual SkPdfTextAnnotationDictionary* asTextAnnotationDictionary() {return NULL;}
  virtual const SkPdfTextAnnotationDictionary* asTextAnnotationDictionary() const {return NULL;}

  virtual SkPdfTextFieldDictionary* asTextFieldDictionary() {return NULL;}
  virtual const SkPdfTextFieldDictionary* asTextFieldDictionary() const {return NULL;}

  virtual SkPdfThreadActionDictionary* asThreadActionDictionary() {return NULL;}
  virtual const SkPdfThreadActionDictionary* asThreadActionDictionary() const {return NULL;}

  virtual SkPdfThreadDictionary* asThreadDictionary() {return NULL;}
  virtual const SkPdfThreadDictionary* asThreadDictionary() const {return NULL;}

  virtual SkPdfTransitionDictionary* asTransitionDictionary() {return NULL;}
  virtual const SkPdfTransitionDictionary* asTransitionDictionary() const {return NULL;}

  virtual SkPdfTransparencyGroupDictionary* asTransparencyGroupDictionary() {return NULL;}
  virtual const SkPdfTransparencyGroupDictionary* asTransparencyGroupDictionary() const {return NULL;}

  virtual SkPdfTrapNetworkAnnotationDictionary* asTrapNetworkAnnotationDictionary() {return NULL;}
  virtual const SkPdfTrapNetworkAnnotationDictionary* asTrapNetworkAnnotationDictionary() const {return NULL;}

  virtual SkPdfTrapNetworkAppearanceStreamDictionary* asTrapNetworkAppearanceStreamDictionary() {return NULL;}
  virtual const SkPdfTrapNetworkAppearanceStreamDictionary* asTrapNetworkAppearanceStreamDictionary() const {return NULL;}

  virtual SkPdfType0FunctionDictionary* asType0FunctionDictionary() {return NULL;}
  virtual const SkPdfType0FunctionDictionary* asType0FunctionDictionary() const {return NULL;}

  virtual SkPdfType10HalftoneDictionary* asType10HalftoneDictionary() {return NULL;}
  virtual const SkPdfType10HalftoneDictionary* asType10HalftoneDictionary() const {return NULL;}

  virtual SkPdfType16HalftoneDictionary* asType16HalftoneDictionary() {return NULL;}
  virtual const SkPdfType16HalftoneDictionary* asType16HalftoneDictionary() const {return NULL;}

  virtual SkPdfType1HalftoneDictionary* asType1HalftoneDictionary() {return NULL;}
  virtual const SkPdfType1HalftoneDictionary* asType1HalftoneDictionary() const {return NULL;}

  virtual SkPdfType1PatternDictionary* asType1PatternDictionary() {return NULL;}
  virtual const SkPdfType1PatternDictionary* asType1PatternDictionary() const {return NULL;}

  virtual SkPdfType2FunctionDictionary* asType2FunctionDictionary() {return NULL;}
  virtual const SkPdfType2FunctionDictionary* asType2FunctionDictionary() const {return NULL;}

  virtual SkPdfType2PatternDictionary* asType2PatternDictionary() {return NULL;}
  virtual const SkPdfType2PatternDictionary* asType2PatternDictionary() const {return NULL;}

  virtual SkPdfType3FunctionDictionary* asType3FunctionDictionary() {return NULL;}
  virtual const SkPdfType3FunctionDictionary* asType3FunctionDictionary() const {return NULL;}

  virtual SkPdfType5HalftoneDictionary* asType5HalftoneDictionary() {return NULL;}
  virtual const SkPdfType5HalftoneDictionary* asType5HalftoneDictionary() const {return NULL;}

  virtual SkPdfType6HalftoneDictionary* asType6HalftoneDictionary() {return NULL;}
  virtual const SkPdfType6HalftoneDictionary* asType6HalftoneDictionary() const {return NULL;}

  virtual SkPdfURIActionDictionary* asURIActionDictionary() {return NULL;}
  virtual const SkPdfURIActionDictionary* asURIActionDictionary() const {return NULL;}

  virtual SkPdfURIDictionary* asURIDictionary() {return NULL;}
  virtual const SkPdfURIDictionary* asURIDictionary() const {return NULL;}

  virtual SkPdfURLAliasDictionary* asURLAliasDictionary() {return NULL;}
  virtual const SkPdfURLAliasDictionary* asURLAliasDictionary() const {return NULL;}

  virtual SkPdfVariableTextFieldDictionary* asVariableTextFieldDictionary() {return NULL;}
  virtual const SkPdfVariableTextFieldDictionary* asVariableTextFieldDictionary() const {return NULL;}

  virtual SkPdfViewerPreferencesDictionary* asViewerPreferencesDictionary() {return NULL;}
  virtual const SkPdfViewerPreferencesDictionary* asViewerPreferencesDictionary() const {return NULL;}

  virtual SkPdfWebCaptureCommandDictionary* asWebCaptureCommandDictionary() {return NULL;}
  virtual const SkPdfWebCaptureCommandDictionary* asWebCaptureCommandDictionary() const {return NULL;}

  virtual SkPdfWebCaptureCommandSettingsDictionary* asWebCaptureCommandSettingsDictionary() {return NULL;}
  virtual const SkPdfWebCaptureCommandSettingsDictionary* asWebCaptureCommandSettingsDictionary() const {return NULL;}

  virtual SkPdfWebCaptureDictionary* asWebCaptureDictionary() {return NULL;}
  virtual const SkPdfWebCaptureDictionary* asWebCaptureDictionary() const {return NULL;}

  virtual SkPdfWebCaptureImageSetDictionary* asWebCaptureImageSetDictionary() {return NULL;}
  virtual const SkPdfWebCaptureImageSetDictionary* asWebCaptureImageSetDictionary() const {return NULL;}

  virtual SkPdfWebCaptureInformationDictionary* asWebCaptureInformationDictionary() {return NULL;}
  virtual const SkPdfWebCaptureInformationDictionary* asWebCaptureInformationDictionary() const {return NULL;}

  virtual SkPdfWebCapturePageSetDictionary* asWebCapturePageSetDictionary() {return NULL;}
  virtual const SkPdfWebCapturePageSetDictionary* asWebCapturePageSetDictionary() const {return NULL;}

  virtual SkPdfWidgetAnnotationDictionary* asWidgetAnnotationDictionary() {return NULL;}
  virtual const SkPdfWidgetAnnotationDictionary* asWidgetAnnotationDictionary() const {return NULL;}

  virtual SkPdfWindowsLaunchActionDictionary* asWindowsLaunchActionDictionary() {return NULL;}
  virtual const SkPdfWindowsLaunchActionDictionary* asWindowsLaunchActionDictionary() const {return NULL;}

  virtual SkPdfXObjectDictionary* asXObjectDictionary() {return NULL;}
  virtual const SkPdfXObjectDictionary* asXObjectDictionary() const {return NULL;}

  virtual SkPdfImageDictionary* asImageDictionary() {return NULL;}
  virtual const SkPdfImageDictionary* asImageDictionary() const {return NULL;}

  virtual SkPdfType1FormDictionary* asType1FormDictionary() {return NULL;}
  virtual const SkPdfType1FormDictionary* asType1FormDictionary() const {return NULL;}

public:
private:
public:
  SkPdfGraphicsStateDictionary(const PdfMemDocument* podofoDoc = NULL, const PdfObject* podofoObj = NULL) : SkPdfDictionary(podofoDoc, podofoObj) {}

  virtual bool valid() const {return true;}

  SkPdfGraphicsStateDictionary& operator=(const SkPdfGraphicsStateDictionary& from) {this->fPodofoDoc = from.fPodofoDoc; this->fPodofoObj = from.fPodofoObj; return *this;}

/** (Optional) The type of PDF object that this dictionary describes; must be
 *  ExtGState for a graphics state parameter dictionary.
**/
  bool has_Type() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Type", "", NULL));
  }

  std::string Type() const {
    std::string ret;
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Type", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

/** (Optional; PDF 1.3) The line width (see "Line Width" on page 152).
**/
  bool has_LW() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "LW", "", NULL));
  }

  double LW() const {
    double ret;
    if (DoubleFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "LW", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional; PDF 1.3) The line cap style (see "Line Cap Style" on page 153).
**/
  bool has_LC() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "LC", "", NULL));
  }

  long LC() const {
    long ret;
    if (LongFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "LC", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional; PDF 1.3) The line join style (see "Line Join Style" on page 153).
**/
  bool has_LJ() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "LJ", "", NULL));
  }

  long LJ() const {
    long ret;
    if (LongFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "LJ", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional; PDF 1.3) The miter limit (see "Miter Limit" on page 153).
**/
  bool has_ML() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "ML", "", NULL));
  }

  double ML() const {
    double ret;
    if (DoubleFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "ML", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional; PDF 1.3) The line dash pattern, expressed as an array of the form
 *  [dashArray dashPhase], where dashArray is itself an array and dashPhase is an
 *  integer (see "Line Dash Pattern" on page 155).
**/
  bool has_D() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "D", "", NULL));
  }

  SkPdfArray D() const {
    SkPdfArray ret;
    if (ArrayFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "D", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return SkPdfArray();
  }

/** (Optional; PDF 1.3) The name of the rendering intent (see "Rendering
 *  Intents" on page 197).
**/
  bool has_RI() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "RI", "", NULL));
  }

  std::string RI() const {
    std::string ret;
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "RI", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

/** (Optional) A flag specifying whether to apply overprint (see Section 4.5.6,
 *  "Overprint Control"). In PDF 1.2 and earlier, there is a single overprint
 *  parameter that applies to all painting operations. Beginning with PDF 1.3,
 *  there are two separate overprint parameters: one for stroking and one for all
 *  other painting operations. Specifying an OP entry sets both parameters un-
 *  less there is also an op entry in the same graphics state parameter dictionary,
 *  in which case the OP entry sets only the overprint parameter for stroking.
**/
  bool has_OP() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "OP", "", NULL));
  }

  bool OP() const {
    bool ret;
    if (BoolFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "OP", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return false;
  }

/** (Optional; PDF 1.3) A flag specifying whether to apply overprint (see Section
 *  4.5.6, "Overprint Control") for painting operations other than stroking. If
 *  this entry is absent, the OP entry, if any, sets this parameter.
**/
  bool has_op() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "op", "", NULL));
  }

  bool op() const {
    bool ret;
    if (BoolFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "op", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return false;
  }

/** (Optional; PDF 1.3) The overprint mode (see Section 4.5.6, "Overprint Con-
 *  trol").
**/
  bool has_OPM() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "OPM", "", NULL));
  }

  long OPM() const {
    long ret;
    if (LongFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "OPM", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional; PDF 1.3) An array of the form [font size], where font is an indirect
 *  reference to a font dictionary and size is a number expressed in text space
 *  units. These two objects correspond to the operands of the Tf operator (see
 *  Section 5.2, "Text State Parameters and Operators"); however, the first oper-
 *  and is an indirect object reference instead of a resource name.
**/
  bool has_Font() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Font", "", NULL));
  }

  SkPdfArray Font() const {
    SkPdfArray ret;
    if (ArrayFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Font", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return SkPdfArray();
  }

/** (Optional) The black-generation function, which maps the interval [0.0 1.0]
 *  to the interval [0.0 1.0] (see Section 6.2.3, "Conversion from DeviceRGB to
 *  DeviceCMYK").
**/
  bool has_BG() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BG", "", NULL));
  }

  SkPdfFunction BG() const {
    SkPdfFunction ret;
    if (FunctionFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BG", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return SkPdfFunction();
  }

/** (Optional; PDF 1.3) Same as BG except that the value may also be the name
 *  Default, denoting the black-generation function that was in effect at the start
 *  of the page. If both BG and BG2 are present in the same graphics state param-
 *  eter dictionary, BG2 takes precedence.
**/
  bool has_BG2() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BG2", "", NULL));
  }

  bool isBG2AFunction() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BG2", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Reference;
  }

  SkPdfFunction getBG2AsFunction() const {
    SkPdfFunction ret = SkPdfFunction();
    if (FunctionFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BG2", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return SkPdfFunction();
  }

  bool isBG2AName() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BG2", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Name;
  }

  std::string getBG2AsName() const {
    std::string ret = "";
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BG2", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

/** (Optional) The undercolor-removal function, which maps the interval
 *  [0.0 1.0] to the interval [-1.0 1.0] (see Section 6.2.3, "Conversion from
 *  DeviceRGB to DeviceCMYK").
**/
  bool has_UCR() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "UCR", "", NULL));
  }

  SkPdfFunction UCR() const {
    SkPdfFunction ret;
    if (FunctionFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "UCR", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return SkPdfFunction();
  }

/** (Optional; PDF 1.3) Same as UCR except that the value may also be the name
 *  Default, denoting the undercolor-removal function that was in effect at the
 *  start of the page. If both UCR and UCR2 are present in the same graphics state
 *  parameter dictionary, UCR2 takes precedence.
**/
  bool has_UCR2() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "UCR2", "", NULL));
  }

  bool isUCR2AFunction() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "UCR2", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Reference;
  }

  SkPdfFunction getUCR2AsFunction() const {
    SkPdfFunction ret = SkPdfFunction();
    if (FunctionFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "UCR2", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return SkPdfFunction();
  }

  bool isUCR2AName() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "UCR2", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Name;
  }

  std::string getUCR2AsName() const {
    std::string ret = "";
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "UCR2", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

/** (Optional) The transfer function, which maps the interval [0.0 1.0] to the
 *  interval [0.0 1.0] (see Section 6.3, "Transfer Functions"). The value is either
 *  a single function (which applies to all process colorants) or an array of four
 *  functions (which apply to the process colorants individually). The name
 *  Identity may be used to represent the identity function.
**/
  bool has_TR() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR", "", NULL));
  }

  bool isTRAFunction() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Reference;
  }

  SkPdfFunction getTRAsFunction() const {
    SkPdfFunction ret = SkPdfFunction();
    if (FunctionFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return SkPdfFunction();
  }

  bool isTRAArray() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Array;
  }

  SkPdfArray getTRAsArray() const {
    SkPdfArray ret = SkPdfArray();
    if (ArrayFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return SkPdfArray();
  }

  bool isTRAName() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Name;
  }

  std::string getTRAsName() const {
    std::string ret = "";
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

/** (Optional; PDF 1.3) Same as TR except that the value may also be the name
 *  Default, denoting the transfer function that was in effect at the start of the
 *  page. If both TR and TR2 are present in the same graphics state parameter dic-
 *  tionary, TR2 takes precedence.
**/
  bool has_TR2() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR2", "", NULL));
  }

  bool isTR2AFunction() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR2", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Reference;
  }

  SkPdfFunction getTR2AsFunction() const {
    SkPdfFunction ret = SkPdfFunction();
    if (FunctionFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR2", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return SkPdfFunction();
  }

  bool isTR2AArray() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR2", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Array;
  }

  SkPdfArray getTR2AsArray() const {
    SkPdfArray ret = SkPdfArray();
    if (ArrayFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR2", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return SkPdfArray();
  }

  bool isTR2AName() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR2", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Name;
  }

  std::string getTR2AsName() const {
    std::string ret = "";
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TR2", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

/** (Optional) The halftone dictionary or stream (see Section 6.4, "Halftones")
 *  or the name Default, denoting the halftone that was in effect at the start of the
 *  page.
**/
  bool has_HT() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "HT", "", NULL));
  }

  bool isHTADictionary() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "HT", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Dictionary;
  }

  SkPdfDictionary* getHTAsDictionary() const {
    SkPdfDictionary* ret = NULL;
    if (DictionaryFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "HT", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return NULL;
  }

  bool isHTAStream() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "HT", "", &ret)) return false;
    return ret->podofo()->HasStream();
  }

  SkPdfStream getHTAsStream() const {
    SkPdfStream ret = SkPdfStream();
    if (StreamFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "HT", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return SkPdfStream();
  }

  bool isHTAName() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "HT", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Name;
  }

  std::string getHTAsName() const {
    std::string ret = "";
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "HT", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

/** (Optional; PDF 1.3) The flatness tolerance (see Section 6.5.1, "Flatness Toler-
 *  ance").
**/
  bool has_FL() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "FL", "", NULL));
  }

  double FL() const {
    double ret;
    if (DoubleFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "FL", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional; PDF 1.3) The smoothness tolerance (see Section 6.5.2, "Smooth-
 *  ness Tolerance").
**/
  bool has_SM() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "SM", "", NULL));
  }

  double SM() const {
    double ret;
    if (DoubleFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "SM", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional) A flag specifying whether to apply automatic stroke adjustment
 *  (see Section 6.5.4, "Automatic Stroke Adjustment").
**/
  bool has_SA() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "SA", "", NULL));
  }

  bool SA() const {
    bool ret;
    if (BoolFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "SA", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return false;
  }

/** (Optional; PDF 1.4) The current blend mode to be used in the transparent
 *  imaging model (see Sections 7.2.4, "Blend Mode," and 7.5.2, "Specifying
 *  Blending Color Space and Blend Mode").
**/
  bool has_BM() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BM", "", NULL));
  }

  bool isBMAName() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BM", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Name;
  }

  std::string getBMAsName() const {
    std::string ret = "";
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BM", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

  bool isBMAArray() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BM", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Array;
  }

  SkPdfArray getBMAsArray() const {
    SkPdfArray ret = SkPdfArray();
    if (ArrayFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BM", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return SkPdfArray();
  }

/** (Optional; PDF 1.4) The current soft mask, specifying the mask shape or
 *  mask opacity values to be used in the transparent imaging model (see
 *  "Source Shape and Opacity" on page 421 and "Mask Shape and Opacity" on
 *  page 443).
 *  Note: Although the current soft mask is sometimes referred to as a "soft clip,"
 *  altering it with the gs operator completely replaces the old value with the new
 *  one, rather than intersecting the two as is done with the current clipping path
 *  parameter (see Section 4.4.3, "Clipping Path Operators").
**/
  bool has_SMask() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "SMask", "", NULL));
  }

  bool isSMaskADictionary() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "SMask", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Dictionary;
  }

  SkPdfDictionary* getSMaskAsDictionary() const {
    SkPdfDictionary* ret = NULL;
    if (DictionaryFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "SMask", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return NULL;
  }

  bool isSMaskAName() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "SMask", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Name;
  }

  std::string getSMaskAsName() const {
    std::string ret = "";
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "SMask", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

/** (Optional; PDF 1.4) The current stroking alpha constant, specifying the con-
 *  stant shape or constant opacity value to be used for stroking operations in the
 *  transparent imaging model (see "Source Shape and Opacity" on page 421
 *  and "Constant Shape and Opacity" on page 444).
**/
  bool has_CA() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "CA", "", NULL));
  }

  double CA() const {
    double ret;
    if (DoubleFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "CA", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional; PDF 1.4) Same as CA, but for nonstroking operations.
**/
  bool has_ca() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "ca", "", NULL));
  }

  double ca() const {
    double ret;
    if (DoubleFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "ca", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional; PDF 1.4) The alpha source flag ("alpha is shape"), specifying
 *  whether the current soft mask and alpha constant are to be interpreted as
 *  shape values (true) or opacity values (false).
**/
  bool has_AIS() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "AIS", "", NULL));
  }

  bool AIS() const {
    bool ret;
    if (BoolFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "AIS", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return false;
  }

/** (Optional; PDF 1.4) The text knockout flag, which determines the behavior
 *  of overlapping glyphs within a text object in the transparent imaging model
 *  (see Section 5.2.7, "Text Knockout").
**/
  bool has_TK() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TK", "", NULL));
  }

  bool TK() const {
    bool ret;
    if (BoolFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TK", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return false;
  }

};

#endif  // __DEFINED__SkPdfGraphicsStateDictionary
